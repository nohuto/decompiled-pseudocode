__int64 __fastcall MulIcmSetDeviceGammaRamp(struct DHPDEV__ *a1, unsigned int a2, void *a3)
{
  _QWORD *v3; // rbx
  int v4; // ebp
  unsigned int v7; // edi
  int v8; // esi
  __int64 v9; // r9
  __int64 (__fastcall *v10)(_QWORD, _QWORD, void *); // r10
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD **)a1;
  v4 = 0;
  v7 = 1;
  v8 = 1;
  if ( !*(_QWORD *)a1 )
    return 0;
  do
  {
    v9 = v3[6];
    v12 = v9;
    v10 = *(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(v9 + 3200);
    if ( v10 && (*(_DWORD *)(v9 + 2096) & 0x10) != 0 && (a3 || (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v12)) )
    {
      v4 = 1;
      v8 &= v10(*(_QWORD *)(v9 + 1768), a2, a3);
    }
    v3 = (_QWORD *)*v3;
  }
  while ( v3 );
  if ( !v4 || !v8 )
    return 0;
  return v7;
}
