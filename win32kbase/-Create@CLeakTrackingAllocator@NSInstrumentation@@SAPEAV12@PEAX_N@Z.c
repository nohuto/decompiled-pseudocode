/*
 * XREFs of ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C00D4E64
 * Callers:
 *     ?InitializeWin32PoolTracking@@YAHXZ @ 0x1C00D4E04 (-InitializeWin32PoolTracking@@YAHXZ.c)
 * Callees:
 *     ?CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z @ 0x1C00D23DC (-CreateCommon@CLeakTrackingAllocator@NSInstrumentation@@CAPEAV12@PEAX_N@Z.c)
 *     ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x1C00D4D04 (-PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ.c)
 *     ?RetrievePreviouslyPersistedState@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAW4TrackingMode@LeakTrackingAllocatorCore@2@PEAW4PoolLeakState@12@PEAII2@Z @ 0x1C00D4F44 (-RetrievePreviouslyPersistedState@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAW4TrackingMode.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1C019AFB8 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z @ 0x1C019B004 (-CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z.c)
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::Create(
        void *a1,
        char a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  int v6; // eax
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  int v10; // r9d
  NSInstrumentation::CLeakTrackingAllocator *v11; // rbx
  int v13; // r9d
  struct NSInstrumentation::CLeakTrackingAllocator *GeneralTrackingAllocator; // rax
  unsigned int v15; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-4Ch] BYREF
  int v17; // [rsp+38h] [rbp-48h] BYREF
  void *v18[2]; // [rsp+40h] [rbp-40h]
  unsigned int v19[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h]

  v4 = 0;
  v18[0] = &unk_1C02D4E88;
  v5 = 0;
  v15 = 0;
  v18[1] = &unk_1C02CAB38;
  v6 = 0;
  v16 = 0;
  v17 = 0;
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  if ( !a2 )
  {
    NSInstrumentation::CLeakTrackingAllocator::RetrievePreviouslyPersistedState(
      (enum NSInstrumentation::LeakTrackingAllocatorCore::TrackingMode *)&v16,
      (enum NSInstrumentation::CLeakTrackingAllocator::PoolLeakState *)&v17,
      v19,
      a4,
      &v15);
    v4 = v15;
    v5 = v16;
    v6 = v17;
  }
  v8 = v5;
  v9 = v18[v6];
  v10 = v9[v8];
  if ( !v10 )
    goto LABEL_4;
  v13 = v10 - 1;
  if ( !v13 )
  {
    GeneralTrackingAllocator = NSInstrumentation::CLeakTrackingAllocator::CreateGeneralTrackingAllocator(v9, v8);
LABEL_7:
    v11 = GeneralTrackingAllocator;
    if ( GeneralTrackingAllocator )
      goto LABEL_5;
    goto LABEL_4;
  }
  if ( v13 == 1 )
  {
    GeneralTrackingAllocator = NSInstrumentation::CLeakTrackingAllocator::CreatePoolTagTrackingAllocator(v9, v19, v4, 1);
    goto LABEL_7;
  }
LABEL_4:
  NSInstrumentation::CLeakTrackingAllocator::CreateCommon(v9);
  v11 = (NSInstrumentation::CLeakTrackingAllocator *)&dword_1C02D4F10;
LABEL_5:
  if ( a2 && v11 )
    NSInstrumentation::CLeakTrackingAllocator::PersistState(v11);
  return v11;
}
