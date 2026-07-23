/*
 * XREFs of PopPepInitializeDebuggerMasks @ 0x140574EDC
 * Callers:
 *     PopPepInitializeVetoMasks @ 0x140574FDC (PopPepInitializeVetoMasks.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x14056962C (PopFxBugCheck.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405717D4 (PopDiagTraceDebuggerTransitionRequirements.c)
 */

void __fastcall PopPepInitializeDebuggerMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // ecx
  _BYTE *v6; // rdx
  _BYTE *v7; // rax
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
            v6 = v12;
            v7 = (_BYTE *)(PopPepPlatformState + 56);
            do
            {
              if ( *v6 )
              {
                if ( !v7[1] )
                  PopFxBugCheck(0x61FuLL, v3, v5, 0LL);
                *v7 = 1;
                PopAutomaticDebuggerTransitions = 1;
              }
              ++v5;
              ++v6;
              v7 += 384;
            }
            while ( v5 < a2 );
          }
          PopDiagTraceDebuggerTransitionRequirements(v3, (__int64)v12, a2);
        }
      }
    }
  }
}
