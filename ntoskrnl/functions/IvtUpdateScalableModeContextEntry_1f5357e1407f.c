__int64 __fastcall IvtUpdateScalableModeContextEntry(
        __int64 a1,
        unsigned int *a2,
        __int64 *ScalableModePasidTables,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  unsigned int v8; // r11d
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  bool v13; // zf
  _QWORD *v15; // rdx
  char v16; // r15
  char v17; // r10
  unsigned __int64 *v18; // rbx
  unsigned __int64 v19; // rcx
  char v20; // bp
  char v21; // al
  __int64 result; // rax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // r11
  __int64 DomainId; // rbx
  __int64 v28; // r9
  int v29; // [rsp+20h] [rbp-98h]
  _OWORD v30[2]; // [rsp+60h] [rbp-58h] BYREF

  v8 = *a2;
  v11 = *(_QWORD *)(a1 + 32);
  v12 = 2 * ((unsigned __int64)*a2 >> 8);
  v13 = *(_BYTE *)(a1 + 320) == 0;
  memset(v30, 0, sizeof(v30));
  if ( v13 )
    v15 = (_QWORD *)(v11 + 8 * v12);
  else
    v15 = (_QWORD *)(v11 + 8 * (v12 + ((unsigned __int8)((unsigned __int8)v8 >> 3) >= 0x10u)));
  v16 = 0;
  v17 = a4 == 1;
  v18 = (unsigned __int64 *)(*v15 + 32 * (v8 & 7 | (8LL * ((v8 >> 3) & 0xF))));
  v19 = *v18;
  if ( (*v18 & 1) == 0 || a8 )
  {
    v20 = 0;
  }
  else
  {
    v20 = 1;
    v21 = (v19 & 4) != 0;
    if ( !a4 )
      v17 = (v19 & 4) != 0;
    v19 = (v19 >> 3) & 1;
    if ( v17 != v21 || a5 != (_BYTE)v19 || v21 || (_BYTE)v19 )
      v16 = 1;
  }
  if ( !ScalableModePasidTables )
    ScalableModePasidTables = IvtGetScalableModePasidTables(a1, v8);
  IvtBuildScalableModeContextEntry(v19, (__int64)ScalableModePasidTables, v17, a5, v29, (__int64 *)v30);
  v24 = a2[1];
  result = (unsigned int)(3 - v24);
  v23 = 1 << v24;
  LOBYTE(v24) = 3 - v24;
  if ( v23 )
  {
    v25 = v23;
    do
    {
      result = IvtSetScalableModeContextEntry(v24, v30, v18);
      v18 = (unsigned __int64 *)((char *)v18 + v26);
      --v25;
    }
    while ( v25 );
  }
  if ( v20 )
  {
    DomainId = IvtGetDomainId(a1, *a2);
    IvtInvalidateContextEntry(a1, (int *)a2, 0, v28, 0);
    return IvtInvalidateScalableModePasidCache(a1, *a2, DomainId, -1, 1, 1, v16);
  }
  return result;
}
