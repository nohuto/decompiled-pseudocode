__int64 __fastcall VSYNC_TIME_STATS::MonitorPowerStateChange(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v5; // r9
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 96);
  v4 = v2 - *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2 == 1;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 64) += v4;
    *(_QWORD *)(a1 + 72) += v5 - v3;
    result = v7 - v8;
    *(_QWORD *)(a1 + 80) += v7 - v8;
  }
  else
  {
    *(_QWORD *)(a1 + 40) += v4;
    *(_QWORD *)(a1 + 48) += v5 - v3;
    result = v7 - v8;
    *(_QWORD *)(a1 + 56) += v7 - v8;
  }
  ++*(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 88) = v2;
  *(_QWORD *)(a1 + 96) = v5;
  *(_QWORD *)(a1 + 104) = v7;
  return result;
}
