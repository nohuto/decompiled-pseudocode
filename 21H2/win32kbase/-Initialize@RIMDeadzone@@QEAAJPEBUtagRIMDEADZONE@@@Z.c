/*
 * XREFs of ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1C016E078
 * Callers:
 *     RIMCreatePointerDeviceDeadzone @ 0x1C015A430 (RIMCreatePointerDeviceDeadzone.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C016E70C (-Release@RIMDeadzone@@QEAAXXZ.c)
 *     ?SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ @ 0x1C016E744 (-SetDeadzonePalmTelemetry@RIMDeadzone@@QEAAJXZ.c)
 */

__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this, const struct tagRIMDEADZONE *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  unsigned int v13; // r14d
  __int64 v14; // rbp
  unsigned int i; // r9d
  __int64 v16; // r8
  __int128 v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-28h]

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 394);
  ++*((_DWORD *)this + 1);
  if ( !a2 )
    goto LABEL_26;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_DWORD *)a2 + 4) >= *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) >= *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 8);
      return v2;
    }
LABEL_26:
    v2 = -1073741811;
    goto LABEL_27;
  }
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_26;
  v5 = *((_DWORD *)a2 + 4);
  v6 = 0;
  if ( v5 )
  {
    v7 = *((_QWORD *)a2 + 1);
    do
    {
      v8 = _mm_cvtsi128_si32(*(__m128i *)(v7 + 24LL * v6));
      v18 = *(_OWORD *)(v7 + 24LL * v6);
      v19 = *(_QWORD *)(v7 + 24LL * v6 + 16);
      if ( v8 > 0x168 || DWORD1(v18) > 0x168 || v8 == DWORD1(v18) )
        goto LABEL_26;
      v9 = 0;
      if ( (_DWORD)v19 )
      {
        while ( *(_DWORD *)(*((_QWORD *)&v18 + 1) + 8LL * v9 + 4) >= *(_DWORD *)(*((_QWORD *)&v18 + 1) + 8LL * v9) )
        {
          if ( ++v9 >= (unsigned int)v19 )
            goto LABEL_14;
        }
        goto LABEL_26;
      }
LABEL_14:
      ;
    }
    while ( ++v6 < v5 );
  }
  *((_DWORD *)this + 4) = 2;
  v10 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 8) = v10;
  v11 = Win32AllocPoolZInit(24 * v10, 1853506642LL);
  *((_QWORD *)this + 3) = v11;
  v12 = v11;
  if ( !v11 )
  {
LABEL_16:
    v2 = -1073741801;
LABEL_27:
    RIMDeadzone::Release(this);
    return v2;
  }
  v13 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      v14 = 3LL * v13;
      v12[v14] = *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v13);
      *(_DWORD *)(*((_QWORD *)this + 3) + 8 * v14 + 16) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 24LL * v13 + 16);
      *(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v13 + 8) = Win32AllocPoolZInit(
                                                              8LL
                                                            * *(unsigned int *)(*((_QWORD *)this + 3) + 24LL * v13 + 16),
                                                              1853506642LL);
      v12 = (_QWORD *)*((_QWORD *)this + 3);
      if ( !v12[3 * v13 + 1] )
        goto LABEL_16;
      for ( i = 0; i < LODWORD(v12[3 * v13 + 2]); v12 = (_QWORD *)*((_QWORD *)this + 3) )
      {
        v16 = i++;
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL * v13 + 8) + 8 * v16) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL * v13 + 8)
                                                                                               + 8 * v16);
      }
    }
    while ( ++v13 < *((_DWORD *)this + 8) );
  }
  RIMDeadzone::SetDeadzonePalmTelemetry(this);
  return v2;
}
