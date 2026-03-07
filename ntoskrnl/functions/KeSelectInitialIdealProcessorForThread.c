ULONG __fastcall KeSelectInitialIdealProcessorForThread(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 8);
  if ( (unsigned __int16)v2 >= *(_WORD *)(a1 + 2576) )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(a1 + 8 * v2 + 2584);
  v5 = v3;
  return KeSelectIdealProcessor(a2, (_WORD *)(a1 + 644 + 2 * v2), &v5, 1u);
}
