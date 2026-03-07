void __fastcall WheapPfaRetireExpiredMemoryEntries(unsigned __int64 a1)
{
  PVOID *v2; // rbx
  unsigned __int64 v3; // rbp
  PVOID *v4; // rdi
  PVOID **v5; // rax

  if ( WheapPolicyMemPfaTimeout && a1 >= WheapPolicyMemPfaTimeout )
  {
    v2 = (PVOID *)WheapPfaList;
    v3 = a1 - WheapPolicyMemPfaTimeout;
    while ( v2 != &WheapPfaList )
    {
      v4 = v2;
      v2 = (PVOID *)*v2;
      if ( (unsigned __int64)v4[4] <= v3 )
      {
        if ( v2[1] != v4 || (v5 = (PVOID **)v4[1], *v5 != v4) )
          __fastfail(3u);
        *v5 = v2;
        v2[1] = v5;
        WheapPfaLogPageMonitorRemoval((__int64)v4, 2, a1);
        ExFreePoolWithTag(v4, 0x61656857u);
      }
    }
  }
}
