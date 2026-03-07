__int64 __fastcall MiUpdateRetpolineImportFixups(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // r15d
  BOOL v5; // r14d
  unsigned __int16 *v6; // rbx
  int v7; // ebp
  _DWORD *v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp-58h] BYREF
  int v13; // [rsp+48h] [rbp-50h]
  __int16 v14; // [rsp+4Ch] [rbp-4Ch]

  v3 = a2;
  v5 = (KiSpeculationFeatures & 0x20000000000LL) == 0;
  v6 = *(unsigned __int16 **)(a2 + 8LL * a3 + 56);
  if ( v6 )
  {
    v7 = a3 << 12;
    if ( v6[3] == 3 )
      result = RtlApplyImportRelocationToPage(
                 a1,
                 v7,
                 a2,
                 (_DWORD)Base,
                 (__int64)(v6 + 4),
                 1,
                 1,
                 (KiSpeculationFeatures & 0x20000000000LL) == 0);
    v8 = v6 + 6;
    v9 = (unsigned __int64)v6 + *v6 + 12;
    while ( (unsigned __int64)v8 < v9 )
    {
      v10 = *v8 & 0xFFF;
      v12 = 0LL;
      v13 = 0;
      v14 = 0;
      RtlpConstructImportRelocationFixup(v10 + v7, v3, (_DWORD)Base, (_DWORD)v8, 1, v5, (__int64)&v12);
      result = RtlpApplyGenericRetpolineFixup(a1, 4096LL, &v12, v10);
      ++v8;
    }
  }
  return result;
}
