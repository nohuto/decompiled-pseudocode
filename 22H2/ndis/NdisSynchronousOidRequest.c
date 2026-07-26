/*
 * XREFs of NdisSynchronousOidRequest @ 0x1C00B10F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0015590 (WPP_RECORDER_SF_qqd.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005F6B0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B0BB8 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 */

__int64 __fastcall NdisSynchronousOidRequest(ULONG_PTR BugCheckParameter2, struct _NDIS_OID_REQUEST *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // [rsp+38h] [rbp-10h]
  char v9[4]; // [rsp+38h] [rbp-10h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = a2->DATA.QUERY_INFORMATION.Oid;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x10u,
      (struct _GUID *)&WPP_0a532a69b4f93cf89502f53ea8ed50ba_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 16),
      (char)a2,
      *(_DWORD *)v9);
  }
  v4 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( *(_BYTE *)(v4 + 56) <= 6u && (*(_BYTE *)(v4 + 56) != 6 || *(_BYTE *)(v4 + 57) < 0x50u) )
    ndisBugCheckEx(0x28uLL, 1uLL, 0LL, 0LL);
  v5 = ndisSynchronousOidRequestInternal(
         BugCheckParameter2,
         *(struct _NDIS_MINIPORT_BLOCK **)(BugCheckParameter2 + 16),
         0LL,
         a2);
  v6 = v5;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v5;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x11u,
      (struct _GUID *)&WPP_0a532a69b4f93cf89502f53ea8ed50ba_Traceguids,
      *(_QWORD *)(BugCheckParameter2 + 16),
      (char)a2,
      v8);
  }
  return v6;
}
