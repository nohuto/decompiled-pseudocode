/*
 * XREFs of RtlpHpRegisterEnvironment @ 0x1403759F0
 * Callers:
 *     RtlpHpHeapCreate @ 0x140375288 (RtlpHpHeapCreate.c)
 *     RtlpHpHeapDestroy @ 0x1405B4210 (RtlpHpHeapDestroy.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140375AC8 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B3B00 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B3EC0 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1405B4520 (RtlpHpVaMgrCtxAllocatorDereference.c)
 */

__int64 __fastcall RtlpHpRegisterEnvironment(__int128 *a1, int a2)
{
  __int128 v2; // xmm0
  unsigned int v4; // esi
  __int64 v5; // rdi
  int v6; // eax
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-30h]
  __int128 v9; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF

  v2 = *a1;
  v11 = 0LL;
  v8 = v2;
  if ( !a2 )
  {
    HIDWORD(v9) = 0;
    if ( BYTE3(v2) )
      LODWORD(v9) = BYTE3(v2) - 1;
    else
      LODWORD(v9) = -1;
    DWORD1(v9) = BYTE1(v2);
    DWORD2(v9) = BYTE2(v2);
    if ( (v2 & 8) != 0 )
      HIDWORD(v9) = 1;
    v10 = *((_QWORD *)&v2 + 1);
    RtlpHpVaMgrCtxAllocatorDereference(&unk_140C70DD8, &v9);
    if ( BYTE1(*(_QWORD *)a1) == 5 )
    {
      v9 = *a1;
      RtlpHpCustomVaCallbacksRegistrarUnregister(&RtlpHpHeapVaCallbacksRegistrar, *((_QWORD *)&v2 + 1), &v9);
    }
    return 0LL;
  }
  v4 = 0x40000000;
  if ( BYTE1(v2) != 4 )
    v4 = 0x200000;
  if ( BYTE1(*(_QWORD *)a1) == 5 )
  {
    v9 = v2;
    result = RtlpHpCustomVaCallbacksRegistrarRegister(&RtlpHpHeapVaCallbacksRegistrar, *((_QWORD *)&v2 + 1), &v11, &v9);
    if ( (int)result < 0 )
      return result;
    v5 = v11;
    *((_QWORD *)&v8 + 1) = v11;
  }
  else
  {
    v5 = *((_QWORD *)&v2 + 1);
  }
  HIDWORD(v9) = 0;
  if ( BYTE3(v2) )
    LODWORD(v9) = BYTE3(v2) - 1;
  else
    LODWORD(v9) = -1;
  DWORD1(v9) = BYTE1(v2);
  DWORD2(v9) = BYTE2(v2);
  if ( (v2 & 8) != 0 )
    HIDWORD(v9) = 1;
  v10 = v5;
  v6 = RtlpHpVaMgrCtxAllocatorReference(&unk_140C70DD8, &v9, v4);
  if ( v6 != -1 )
  {
    BYTE3(v8) = v6 + 1;
    *a1 = v8;
    return 0LL;
  }
  if ( BYTE1(*(_QWORD *)a1) == 5 )
  {
    v9 = *a1;
    RtlpHpCustomVaCallbacksRegistrarUnregister(&RtlpHpHeapVaCallbacksRegistrar, v5, &v9);
  }
  return 3221225626LL;
}
