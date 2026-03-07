__int64 __fastcall RtlpFcApplyUpdateAndAddFeature(__int64 a1, __int128 *a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 *v6; // r11
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  result = *(unsigned int *)(a1 + 28);
  if ( (result & 4) == 0 )
  {
    v7 = *a2;
    RtlpFcUpdateFeature(&v7, a1);
    result = RtlpFcDoesFeatureHaveUniqueState(&v7);
    if ( (_BYTE)result )
    {
      result = *v6;
      *(_OWORD *)*v6 = v7;
      *v6 += 16LL;
      ++*a4;
    }
  }
  return result;
}
