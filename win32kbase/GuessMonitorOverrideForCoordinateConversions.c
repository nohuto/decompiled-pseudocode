__int64 __fastcall GuessMonitorOverrideForCoordinateConversions(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = a1;
  v3 = 0LL;
  if ( **(_DWORD **)gpDispInfo > 1u && qword_1C02D71B0 && (int)qword_1C02D71B0() >= 0 )
  {
    if ( qword_1C02D71B8 )
    {
      v7 = 18LL;
      if ( !a3 )
        v7 = a2;
      v8 = qword_1C02D71B8(&v10, v7);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 40);
      if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v9 + 288) >> 8)) & 0x1FF) == 0 )
        return HMValidateSharedHandleNoRip(*(_QWORD *)(v9 + 256));
    }
  }
  return v3;
}
