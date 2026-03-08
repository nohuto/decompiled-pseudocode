/*
 * XREFs of ?SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z @ 0x1C03475D0
 * Callers:
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C035E514 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObjectByPointer(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v5; // rdi
  struct DXGPROCESS *Current; // r13
  unsigned int v8; // esi
  _DWORD *v9; // r12
  void **v10; // rbx
  struct _OBJECT_TYPE *ObjectType; // rax
  struct _OBJECT_TYPE *v12; // r8
  void *v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rdx
  unsigned int v21; // [rsp+50h] [rbp-69h] BYREF
  DXG_GUEST_REMOTEOBJECTCHANNEL *v22; // [rsp+58h] [rbp-61h]
  int v23; // [rsp+60h] [rbp-59h] BYREF
  int v24; // [rsp+64h] [rbp-55h]
  __int64 v25; // [rsp+68h] [rbp-51h]
  _DWORD v26[2]; // [rsp+70h] [rbp-49h] BYREF
  __int64 v27; // [rsp+78h] [rbp-41h]
  int v28; // [rsp+80h] [rbp-39h]
  _DWORD v29[17]; // [rsp+84h] [rbp-35h] BYREF

  v5 = a2;
  v22 = this;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
  {
    if ( !a4 || !a3 || (unsigned int)(v5 - 1) > 0xF )
    {
      WdLogSingleEntry4(3LL, a4, a3, v5, -1073741811LL);
      return 3221225485LL;
    }
    *a4 = 0;
    v26[1] = -1073741823;
    v27 = 1LL;
    v26[0] = 1869901170;
    v28 = 0;
    memset(v29, 0, sizeof(v29));
    v23 = 1869901170;
    v24 = -1073741823;
    v8 = 0;
    v25 = 2LL;
    v21 = 16;
    if ( (_DWORD)v5 )
    {
      v9 = &v29[1];
      v10 = a3;
      do
      {
        ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(*v10);
        v12 = ObjectType;
        if ( ObjectType == g_pDxgkSharedAllocationObjectType )
        {
          v13 = *v10;
          v14 = *((_DWORD *)*v10 + 10);
        }
        else
        {
          if ( ObjectType != g_pDxgkSharedSyncObjectType )
          {
            v18 = -1073741811;
            WdLogSingleEntry3(3LL, a3[v8], ObjectType, -1073741811LL);
            return v18;
          }
          v13 = *v10;
          v14 = *((_DWORD *)*v10 + 2);
        }
        *v9 = v14;
        if ( !v14 )
        {
          v18 = -1073741811;
          WdLogSingleEntry4(3LL, (unsigned int)v29[v8 + 1], v13, v12, -1073741811LL);
          return v18;
        }
        ++v8;
        ++v10;
        ++v9;
      }
      while ( v8 < (unsigned int)v5 );
    }
    v28 = v5;
    v15 = *((_DWORD *)Current + 126);
    v29[0] |= 1u;
    v16 = *((_QWORD *)v22 + 1);
    HIDWORD(v27) = v15;
    v17 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v16 + 32LL))(
            v16,
            v26,
            88LL,
            &v23,
            &v21);
    v18 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry1(3LL, v17);
      return v18;
    }
    if ( v21 == 16 )
    {
      if ( (_DWORD)v25 == 2 )
      {
        v18 = v24;
        if ( v24 >= 0 )
          *a4 = HIDWORD(v25);
        return v18;
      }
      v19 = (int)v25;
    }
    else
    {
      v19 = v21;
    }
    WdLogSingleEntry2(3LL, v19, -1073741823LL);
    return (unsigned int)-1073741823;
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid process context. Returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
