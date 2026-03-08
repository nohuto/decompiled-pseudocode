/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A24
 * Callers:
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x1C0007968 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C000B490 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C0013088 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_Create @ 0x1C001BE7C (XilCoreCommonBuffer_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0005BBC (WPP_RECORDER_SF_.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C0008244 (DmaEnabler_AllocateCommonBufferPage.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C001E4E0 (WPP_RECORDER_SF_qdd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C0051FD8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x1C0052B6C (WPP_RECORDER_SF_ddqDddd.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C007A6EC (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

void __fastcall XilCoreCommonBuffer_AllocateBuffers(__int64 **a1, __int64 a2, int a3)
{
  unsigned int v3; // r12d
  __int64 v5; // rsi
  unsigned int v7; // ebp
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  __int64 *v15; // r15
  __int64 **v16; // rdi
  KIRQL v17; // al
  __int64 v18; // r14
  _QWORD *v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 ***v26; // rcx
  int v27; // edx
  int v28; // r9d
  int v29; // eax
  int v30; // [rsp+20h] [rbp-88h]
  int v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v34; // [rsp+C0h] [rbp+18h]
  __int64 i; // [rsp+C8h] [rbp+20h]

  v3 = 0;
  v33 = 0LL;
  v5 = a2;
  v32 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v31 = *(_DWORD *)(a2 + 28);
    v29 = *(_DWORD *)(a2 + 24);
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qdd(a1[1][9], a2, 8, 11, (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids, v5, v29, v31);
  }
  _InterlockedIncrement((volatile signed __int32 *)a1 + 52);
  v7 = ((unsigned int)(a3 * *(_DWORD *)v5) >> 12) + (((a3 * *(_DWORD *)v5) & 0xFFF) != 0);
  v9 = 0x1000u % *(_DWORD *)v5;
  v8 = 0x1000u / *(_DWORD *)v5;
  v34 = 0x1000u / *(_DWORD *)v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_dd(a1[1][9], v9, 8, 12, (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids, v7, v8);
    v8 = v34;
  }
  v10 = 0;
  if ( v7 )
  {
    v11 = 88 * v8 + 32;
    for ( i = v11; ; v11 = i )
    {
      v12 = **a1;
      v13 = *((_BYTE *)*a1 + 80)
          ? SecureDmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v12 + 104), v11, &v32, &v33)
          : DmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v12 + 96), v11, &v32, &v33);
      if ( v13 < 0 )
        break;
      v15 = (__int64 *)v32;
      if ( (*(_DWORD *)(v32 + 8) & 0xFFF) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_(a1[1][9], v14, 8, 13, (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids);
        }
        if ( *((_BYTE *)*a1 + 80) )
          SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(**a1 + 104), v15);
        else
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1664))(WdfDriverGlobals, v15[2]);
      }
      else
      {
        v16 = a1 + 2;
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 2);
        v18 = v33;
        *((_BYTE *)a1 + 25) = v17;
        ++*((_DWORD *)a1 + 50);
        *(_QWORD *)(v18 + 24) = v15;
        *(_BYTE *)(v18 + 16) = 1;
        v19 = *(_QWORD **)(v5 + 56);
        if ( *v19 != v5 + 48 )
LABEL_33:
          __fastfail(3u);
        *(_QWORD *)v18 = v5 + 48;
        *(_QWORD *)(v18 + 8) = v19;
        *v19 = v18;
        *(_QWORD *)(v5 + 56) = v18;
        if ( v34 )
        {
          v20 = v5 + 32;
          v21 = (_QWORD *)(v18 + 80);
          do
          {
            v22 = *v15;
            *(v21 - 4) = *v15;
            *(v21 - 4) = v22 + *(_DWORD *)v5 * v3;
            v23 = v15[1];
            *(v21 - 3) = v23;
            v24 = *(_DWORD *)v5 * v3;
            *(v21 - 2) = v18;
            *(v21 - 3) = v23 + v24;
            *((_DWORD *)v21 - 2) = *(_DWORD *)v5;
            v25 = *(_QWORD **)(v20 + 8);
            if ( *v25 != v20 )
              goto LABEL_33;
            *(v21 - 5) = v25;
            *(v21 - 6) = v20;
            *v25 = v21 - 6;
            *(_QWORD *)(v20 + 8) = v21 - 6;
            v26 = (__int64 ***)a1[21];
            if ( *v26 != a1 + 20 )
              goto LABEL_33;
            *v21 = a1 + 20;
            v21[1] = v26;
            *v26 = (__int64 **)v21;
            a1[21] = v21;
            v27 = *(_DWORD *)(v5 + 24) + 1;
            v28 = *(_DWORD *)(v5 + 28) + 1;
            *(_DWORD *)(v5 + 24) = v27;
            *(_DWORD *)(v5 + 28) = v28;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_ddqDddd(
                  a1[1][9],
                  v27,
                  v20,
                  v28,
                  v30,
                  v10,
                  v3,
                  *(v21 - 4),
                  *((_DWORD *)v21 - 6),
                  *((_DWORD *)v21 - 2),
                  v27,
                  v28);
                v20 = v5 + 32;
              }
            }
            ++v3;
            v21 += 11;
          }
          while ( v3 < v34 );
          v16 = a1 + 2;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v16, *((_BYTE *)v16 + 9));
        v3 = 0;
      }
      if ( ++v10 >= v7 )
        break;
    }
  }
}
