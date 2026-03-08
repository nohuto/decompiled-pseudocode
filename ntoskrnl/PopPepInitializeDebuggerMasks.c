/*
 * XREFs of PopPepInitializeDebuggerMasks @ 0x14059CD30
 * Callers:
 *     PopPepPlatformStateRegistered @ 0x14059D504 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x14059015C (PopDiagTraceDebuggerTransitionRequirements.c)
 */

void __fastcall PopPepInitializeDebuggerMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+2Ch] [rbp-3Ch]
  _OWORD *v11; // [rsp+30h] [rbp-38h]
  _OWORD v12[2]; // [rsp+38h] [rbp-30h] BYREF

  if ( *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v10 = 0;
    memset(v12, 0, sizeof(v12));
    v4 = *(_QWORD *)(v3 + 64);
    if ( v4 == PopFxProcessorPlugin )
    {
      if ( v4 )
      {
        v8 = *(_QWORD *)(v3 + 72);
        v11 = v12;
        v9 = a2;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v4 + 96))(35LL, &v8) )
        {
          v5 = 0;
          if ( a2 )
          {
            v6 = 0LL;
            v7 = v12;
            do
            {
              if ( *v7 )
              {
                if ( !*(_BYTE *)(v6 + PopPepPlatformState + 57) )
                  PopFxBugCheck(0x61FuLL, v3, v5, 0LL);
                *(_BYTE *)(v6 + PopPepPlatformState + 56) = 1;
                PopAutomaticDebuggerTransitions = 1;
              }
              ++v5;
              ++v7;
              v6 += 448LL;
            }
            while ( v5 < a2 );
          }
          PopDiagTraceDebuggerTransitionRequirements(v3, (__int64)v12, a2);
        }
      }
    }
  }
}
