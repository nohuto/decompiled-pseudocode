/*
 * XREFs of ACPIBusIrpQueryInstanceId @ 0x1C008060C
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0080330 (ACPIBusIrpQueryId.c)
 * Callees:
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     RtlStringCbPrintfW @ 0x1C0017D20 (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C0017F78 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIAllocateBuffer @ 0x1C0097C2C (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryInstanceId(__int64 *a1, size_t *a2, _QWORD *a3)
{
  __int64 v6; // rax
  size_t v7; // rdi
  void *v8; // rbp
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  void *Pool2; // rax
  __int64 v14; // rdx
  const char *v15; // rax
  const char *v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+20h] [rbp-58h]
  int v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+30h] [rbp-48h]
  void *Src; // [rsp+88h] [rbp+10h] BYREF
  size_t cbDest; // [rsp+98h] [rbp+20h] BYREF

  Src = 0LL;
  cbDest = 0LL;
  v6 = ACPIAllocateBuffer(a2, a3, 660LL);
  v7 = *a2;
  v8 = (void *)v6;
  *a1 = v6;
  if ( !v6 )
    goto LABEL_2;
  v10 = ACPIGet((__int64)a3, 0x4449555Fu, 268959894, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&cbDest);
  v9 = v10;
  if ( v10 != -1073741661 )
  {
    if ( v10 < 0 )
    {
      if ( v10 == -1073741772 )
        goto LABEL_19;
      goto LABEL_13;
    }
    goto LABEL_10;
  }
  v11 = a3[77];
  if ( v11 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_BYTE *)(v11 + v12) );
    cbDest = 2 * v12 + 2;
    Pool2 = (void *)ExAllocatePool2(256LL, cbDest, 1399874369LL);
    Src = Pool2;
    if ( !Pool2 )
    {
LABEL_2:
      v9 = -1073741670;
      goto LABEL_13;
    }
    RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Pool2, cbDest, L"%S", a3[77]);
    v9 = 0;
LABEL_10:
    if ( v7 >= cbDest )
    {
      memmove(v8, Src, cbDest);
      goto LABEL_19;
    }
    goto LABEL_2;
  }
LABEL_13:
  v14 = 0LL;
  v15 = byte_1C00622D0;
  v16 = byte_1C00622D0;
  if ( a3 )
  {
    v17 = a3[1];
    v14 = (__int64)a3;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v15 = (const char *)a3[76];
      if ( (v17 & 0x400000000000LL) != 0 )
        v16 = (const char *)a3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x27u,
      v19,
      v20,
      v21,
      v9,
      v14,
      v15,
      v16);
LABEL_19:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return v9;
}
