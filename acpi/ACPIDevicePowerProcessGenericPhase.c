__int64 __fastcall ACPIDevicePowerProcessGenericPhase(_QWORD *a1, __int64 a2, unsigned __int16 a3, char a4)
{
  _QWORD *v4; // rbx
  char v8; // bp
  unsigned __int32 v9; // ecx
  _QWORD *v10; // r15
  _QWORD *v11; // rdi
  unsigned __int32 v12; // eax
  unsigned __int32 v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  unsigned __int32 i; // [rsp+30h] [rbp-38h]

  v4 = (_QWORD *)*a1;
  v8 = 1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v9 = a3;
    for ( i = a3; ; v9 = i )
    {
      v10 = (_QWORD *)*v4;
      v11 = v4;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)v4 + 52, 1, 1);
      v13 = v12;
      if ( v12 >= v9 )
        KeBugCheckEx(0xA3u, 1uLL, 0xC17C8uLL, 0LL, 0LL);
      _mm_lfence();
      v14 = *(_QWORD *)(a2 + 8LL * v12);
      if ( v14 )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v4 + 52, 1, v12);
        if ( (*(int (__fastcall **)(_QWORD *))(v14 + 8LL * *((int *)v4 + 12)))(v4) >= 0 )
          goto LABEL_18;
        v13 = 0;
        v4 = v10;
      }
      else
      {
        v4 = v10;
        if ( v12 == 1 )
        {
          if ( (unsigned __int8)ACPIIsPowerRequestBlocked(v11) )
          {
            v15 = *v11;
            if ( *(_QWORD **)(*v11 + 8LL) != v11
              || (v16 = (_QWORD *)v11[1], (_QWORD *)*v16 != v11)
              || (*v16 = v15,
                  *(_QWORD *)(v15 + 8) = v16,
                  v11[12] = a1,
                  v17 = (_QWORD *)qword_1C006F1B8,
                  *(__int64 **)qword_1C006F1B8 != &AcpiPowerBlockedOnDependencyList) )
            {
              __fastfail(3u);
            }
            *v11 = &AcpiPowerBlockedOnDependencyList;
            v11[1] = v17;
            *v17 = v11;
            qword_1C006F1B8 = (__int64)v11;
            goto LABEL_15;
          }
        }
        else if ( !v12 )
        {
          goto LABEL_15;
        }
        v8 = 0;
        if ( v13 == 2 )
          goto LABEL_17;
      }
LABEL_15:
      if ( a4 == 1 && !v13 )
LABEL_17:
        ACPIDeviceCompleteRequest(v11);
LABEL_18:
      if ( v4 == a1 )
        return v8 == 0 ? 0x103 : 0;
    }
  }
  return v8 == 0 ? 0x103 : 0;
}
