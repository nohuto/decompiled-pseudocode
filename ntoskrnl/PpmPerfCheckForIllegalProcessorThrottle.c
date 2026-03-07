void __fastcall PpmPerfCheckForIllegalProcessorThrottle(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64 *); // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( PopProcessorThrottleLogInterval )
  {
    v2 = *(_QWORD *)(a1 + 33968);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 33976);
      if ( v3 )
      {
        v4 = *(void (__fastcall **)(__int64 *))(v2 + 320);
        if ( v4 )
        {
          if ( *(_BYTE *)(a1 + 33848) )
          {
            v4(&v6);
            if ( *(_DWORD *)(v3 + 72) < *(_DWORD *)(v2 + 448) )
            {
              *(_BYTE *)(a1 + 33856) = 0;
            }
            else if ( *(_BYTE *)(a1 + 33856) )
            {
              if ( *(_QWORD *)(a1 + 33864) != v6 )
              {
                v5 = (unsigned int)(*(_DWORD *)(a1 + 33852) + 1);
                *(_DWORD *)(a1 + 33852) = v5;
                if ( !((unsigned int)v5 % PopProcessorThrottleLogInterval) || (_DWORD)v5 == 1 )
                {
                  LODWORD(v5) = KeGetPcr()->Prcb.Number;
                  PopDiagTraceIllegalProcessorThrottle(v5, v6, a1 + 33872);
                }
              }
            }
            else
            {
              *(_BYTE *)(a1 + 33856) = 1;
            }
            *(_QWORD *)(a1 + 33864) = v6;
          }
        }
      }
    }
  }
}
