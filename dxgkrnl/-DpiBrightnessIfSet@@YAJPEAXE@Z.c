__int64 __fastcall DpiBrightnessIfSet(_QWORD *a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r8
  int v4; // esi
  __int16 v6; // ax
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // edi
  bool v10; // zf
  _DWORD v12[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v13; // [rsp+50h] [rbp-9h]
  int v14; // [rsp+58h] [rbp-1h]
  int v15; // [rsp+5Ch] [rbp+3h]
  int v16; // [rsp+60h] [rbp+7h]
  int v17; // [rsp+64h] [rbp+Bh]
  int v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  __int64 v20; // [rsp+70h] [rbp+17h]

  v2 = a1[8];
  v3 = 0LL;
  v4 = a2;
  v6 = *(_WORD *)(v2 + 4682);
  if ( v6 == 2 )
    v3 = v2 + 4680;
  v7 = 0LL;
  if ( v6 == 1 )
    v7 = v2 + 4680;
  if ( (!v3 || !*(_QWORD *)(v3 + 40)) && (!v7 || !*(_QWORD *)(v7 + 40)) )
    return 3221225659LL;
  KeWaitForSingleObject((PVOID)(v2 + 4408), Executive, 0, 0, 0LL);
  v9 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  if ( v9 >= 0 )
  {
    v10 = *(_BYTE *)(v2 + 4401) == 0;
    *(_BYTE *)(v2 + 4403) = v4;
    if ( v10 )
    {
      LOBYTE(v8) = v4;
      v9 = DpiCallDrvSetBrightness(a1, v8);
      if ( v9 >= 0 )
        *(_BYTE *)(v2 + 4400) = v4;
      if ( *(_BYTE *)(v2 + 4402) )
      {
        v15 = 0;
        v14 = 0;
        v19 = 0;
        v13 = 0LL;
        v20 = *(_QWORD *)(v2 + 2672);
        v12[0] = 30;
        v12[1] = 72;
        memset(&v12[2], 0, 24);
        v16 = 67;
        v17 = v4;
        v18 = v9;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v12, 0x200000000LL);
      }
    }
    else
    {
      v9 = 0;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4408), 0);
  return (unsigned int)v9;
}
