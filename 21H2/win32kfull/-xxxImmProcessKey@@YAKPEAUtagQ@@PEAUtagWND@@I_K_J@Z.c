/*
 * XREFs of ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1C00F5228
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     ?CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z @ 0x1C00F5400 (-CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z.c)
 *     GetAppImeCompatFlags @ 0x1C00F5524 (GetAppImeCompatFlags.c)
 *     ClientImmProcessKey @ 0x1C00F554C (ClientImmProcessKey.c)
 */

__int64 __fastcall xxxImmProcessKey(struct tagQ *a1, struct tagWND *a2, int a3, unsigned __int16 a4, __int64 a5)
{
  int v8; // edi
  __int64 v9; // rsi
  int v10; // ebx
  struct _tagIMEHOTKEYOBJ *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  int v14; // ebp
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // r9

  if ( ((a3 - 256) & 0xFFFFFFFA) != 0 )
    return 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 440LL);
  if ( !v9 )
    return 0LL;
  v10 = (unsigned __int8)a4;
  v11 = CheckImeHotKey(a1, (unsigned __int8)a4, a5);
  v13 = 0xFFFFFFFFLL;
  if ( v11 )
  {
    v14 = *((_DWORD *)v11 + 2);
    v22 = *((_QWORD *)v11 + 3);
    if ( (unsigned int)(v14 - 256) > 0x1F )
      goto LABEL_5;
    if ( *(_QWORD *)(v9 + 40) != v22 )
    {
      LOBYTE(v8) = (*(_DWORD *)(v9 + 64) & gSystemFS) != 0;
      PostMessage((int)a2, 80, v8, v22);
    }
    return (GetAppImeCompatFlags(*((_QWORD *)a2 + 2), v13, v12, v22) & 0x800000) == 0;
  }
  v14 = -1;
LABEL_5:
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  if ( v14 == -1 )
  {
    if ( !*(_QWORD *)(v9 + 80)
      || !_HMObjectFromHandle(*(_QWORD *)(*((_QWORD *)a2 + 5) + 208LL))
      || (a5 & 0x80000000) != 0 && (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 4) != 0 )
    {
      return 0LL;
    }
    if ( (unsigned int)(v10 - 241) > 0xA || (v15 = 1779, v16 = 1, !_bittest(&v15, v10 - 241)) )
      v16 = 0;
    if ( (unsigned int)(a3 - 260) <= 1 && v10 != 18 && v10 != 121 && !v16
      || (*(_DWORD *)(*(_QWORD *)(v9 + 80) + 12LL) & 8) == 0 && !v16 && (v10 == 18 || (a5 & 0x20000000) != 0) )
    {
      return 0LL;
    }
  }
  if ( v10 == 231 )
    v10 = a4 | (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16);
  v17 = ClientImmProcessKey(*(_QWORD *)a2, *(_QWORD *)(v9 + 40), v10, a5, v14);
  if ( (GetAppImeCompatFlags(*((_QWORD *)a2 + 2), v18, v19, v20) & 0x800000) != 0 )
    v17 &= ~1u;
  return v17;
}
