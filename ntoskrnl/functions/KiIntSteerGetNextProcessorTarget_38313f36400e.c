__int64 __fastcall KiIntSteerGetNextProcessorTarget(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_WORD *)(a2 + 8);
  v4[0] = *(_QWORD *)a2 & *(_QWORD *)(a1 + 64);
  v4[1] = v2;
  if ( v4[0] )
    return KiIntPartGetLowestClassProcessorInMask(v4);
  else
    return 0xFFFFFFFFLL;
}
