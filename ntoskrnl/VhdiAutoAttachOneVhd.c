void __fastcall VhdiAutoAttachOneVhd(_WORD *Src, _OWORD *a2, int a3)
{
  __int64 v6; // r9
  size_t v7; // rsi
  __int64 Pool2; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // r9
  int v17; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-39h] BYREF
  PVOID *p_P; // [rsp+60h] [rbp-19h]
  __int64 v21; // [rsp+68h] [rbp-11h]
  _BYTE v22[16]; // [rsp+70h] [rbp-9h] BYREF
  _OWORD *v23; // [rsp+80h] [rbp+7h]
  __int64 v24; // [rsp+88h] [rbp+Fh]
  int *v25; // [rsp+90h] [rbp+17h]
  __int64 v26; // [rsp+98h] [rbp+1Fh]

  if ( Src )
  {
    P = 0LL;
    if ( PnpSetupOOBEInProgress && PnpSetupUpgradeInProgress )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( Src[v6] );
      v7 = 2 * v6 + 2;
      Pool2 = ExAllocatePool2(256LL, 2 * v6 + 42, 1113876566LL);
      v9 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        *(_DWORD *)(Pool2 + 16) = a3;
        *(_OWORD *)(Pool2 + 20) = *a2;
        memmove((void *)(Pool2 + 36), Src, v7);
        v10 = (_QWORD *)qword_140CF7F68;
        if ( *(PVOID **)qword_140CF7F68 != &qword_140CF7F60 )
          __fastfail(3u);
        *v9 = &qword_140CF7F60;
        v9[1] = v10;
        *v10 = v9;
        qword_140CF7F68 = (__int64)v9;
      }
    }
    else
    {
      v17 = 28;
      v11 = RtlAcquirePrivilege(&v17, 1LL, 0LL, &P);
      LOBYTE(v15) = v11;
      if ( v11 < 0 || (v15 = VhdiMountVhdFile(Src), RtlReleasePrivilege(P), v15 < 0) )
      {
        if ( (Microsoft_Windows_Kernel_IOEnableBits & 4) != 0 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( Src[v16] );
          McTemplateK0hzr0d_EtwWriteTransfer(v13, v12, v14, v16, (__int64)Src, v15);
        }
        if ( (unsigned int)dword_140C03848 > 5 && tlgKeywordOn((__int64)&dword_140C03848, 0x400000000000LL) )
        {
          P = (PVOID)0x2000000;
          p_P = &P;
          v21 = 8LL;
          tlgCreate1Sz_wchar_t((__int64)v22, (const size_t *)Src);
          v23 = a2;
          v25 = &v17;
          v24 = 16LL;
          v17 = a3;
          v26 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03848,
            (unsigned __int8 *)&dword_14003A38C,
            0LL,
            0LL,
            6u,
            &v19);
        }
      }
    }
  }
}
