__int64 __fastcall NtGdiGetPhysicalMonitorDescription(void *a1, int a2, _OWORD *a3)
{
  __int64 v6; // rcx
  int MonitorDescription; // ebx
  __int64 v8; // rax
  unsigned __int16 *v9; // rax
  __int64 v10; // rcx
  unsigned __int16 v12[128]; // [rsp+20h] [rbp-128h] BYREF

  memset_0(v12, 0, sizeof(v12));
  if ( a2 == 128 )
  {
    v8 = SGDGetSessionState(v6);
    MonitorDescription = CMonitorAPI::GetMonitorDescription(
                           *(CMonitorAPI **)(*(_QWORD *)(v8 + 32) + 8728LL),
                           a1,
                           0x80u,
                           v12);
    if ( MonitorDescription >= 0 )
    {
      MonitorDescription = 0;
      ProbeForWrite(a3, 0x100uLL, 1u);
      v9 = v12;
      v10 = 2LL;
      do
      {
        *a3 = *(_OWORD *)v9;
        a3[1] = *((_OWORD *)v9 + 1);
        a3[2] = *((_OWORD *)v9 + 2);
        a3[3] = *((_OWORD *)v9 + 3);
        a3[4] = *((_OWORD *)v9 + 4);
        a3[5] = *((_OWORD *)v9 + 5);
        a3[6] = *((_OWORD *)v9 + 6);
        a3 += 8;
        *(a3 - 1) = *((_OWORD *)v9 + 7);
        v9 += 64;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)MonitorDescription;
}
