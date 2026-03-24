/*
 * XREFs of ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C006F428
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C006E7A4 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x1C01B2F84 (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::CMouseConfig::FindInputSpace(CInputConfig::CMouseConfig *this)
{
  char v2; // si
  CInputConfig *v3; // r14
  _QWORD **v4; // rdi
  CInputConfig *v5; // rdx
  CInputConfig *i; // r8
  _QWORD **v7; // rax
  _QWORD **v8; // rcx
  char v9; // al

  *((_QWORD *)this + 1) = 0LL;
  if ( *(_DWORD *)this || (v2 = 1, *((_DWORD *)this + 1)) )
    v2 = 0;
  v3 = gpInputConfig;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v5 = *(CInputConfig **)v3;
  for ( i = **(CInputConfig ***)v3; ; i = *(CInputConfig **)i )
  {
    v7 = 0LL;
    if ( v5 != v3 )
      v7 = (_QWORD **)((char *)v5 + 16);
    if ( !v7 )
      break;
    v8 = 0LL;
    if ( v5 != v3 )
      v8 = (_QWORD **)((char *)v5 + 16);
    if ( v2 )
    {
      v9 = (_BYTE)v8[1] & 1;
    }
    else
    {
      if ( *(_DWORD *)this == *(_DWORD *)v8 && *((_DWORD *)this + 1) == *((_DWORD *)v8 + 1) )
      {
LABEL_12:
        *((_QWORD *)this + 1) = v8;
        break;
      }
      v9 = 0;
    }
    if ( v9 )
      goto LABEL_12;
    if ( ((_DWORD)v8[1] & 1) != 0 || !v4 )
      v4 = v8;
    v5 = i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( !*((_QWORD *)this + 1) )
  {
    *((_QWORD *)this + 1) = v4;
    if ( !v4 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 828LL);
      if ( !*((_QWORD *)this + 1) )
        *((_QWORD *)this + 1) = (char *)this + 16;
    }
  }
}
