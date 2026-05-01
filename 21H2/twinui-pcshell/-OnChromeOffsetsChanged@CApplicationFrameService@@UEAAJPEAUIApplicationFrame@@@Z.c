/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18003AA00
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18000DFB0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095340 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B0790 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  int v6; // r11d
  unsigned __int64 v7; // r10
  __int64 v8; // rdi
  __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  unsigned __int64 v12; // r10
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // r11d
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rdx
  __int64 v19; // rcx
  volatile int *v20; // rdx
  signed __int64 v21; // rax
  unsigned int v22; // ecx
  signed __int64 v23; // rtt
  __int64 v25; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+38h] [rbp-50h] BYREF
  __int64 v27; // [rsp+40h] [rbp-48h]
  __int64 v28; // [rsp+48h] [rbp-40h] BYREF
  __int128 v29; // [rsp+50h] [rbp-38h] BYREF

  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v29) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v26) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v28) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v4 = v28;
    v5 = 0LL;
    v27 = 0LL;
    v6 = -2147023728;
    v7 = 0LL;
    do
    {
      if ( v7 >= *((_QWORD *)this + 12) )
        break;
      v8 = *((_QWORD *)this + 11) + 8 * v7;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 80LL) == v4 )
      {
        v6 = 0;
        if ( v9 )
        {
          v10 = *(_QWORD *)(v9 + 64);
          while ( v10 >= 0 )
          {
            if ( (_DWORD)v10 != 0x7FFFFFFF )
            {
              v11 = v10;
              v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 64), v10 + 1, v10);
              if ( v11 != v10 )
                continue;
            }
            goto LABEL_14;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v10 + 16));
        }
LABEL_14:
        v5 = *(_QWORD *)v8;
        v27 = *(_QWORD *)v8;
      }
      else
      {
        v6 = -2147023728;
      }
      ++v7;
    }
    while ( v6 < 0 );
    v12 = 0LL;
    if ( v6 >= 0 )
    {
LABEL_32:
      v25 = 0LL;
      v18 = v5 + 8;
      if ( !v5 )
        v18 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(**((_QWORD **)this + 15) + 48LL))(
             *((_QWORD *)this + 15),
             v18,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v25) >= 0 )
      {
        *(_OWORD *)(v5 + 88) = v29;
        *(_DWORD *)(v5 + 104) = v26;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 488LL))(v25);
      }
      v19 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
    }
    else
    {
      while ( v12 < *((_QWORD *)this + 8) )
      {
        v13 = *((_QWORD *)this + 7) + 8 * v12;
        v14 = *(_QWORD *)v13;
        if ( *(_QWORD *)(*(_QWORD *)v13 + 80LL) == v4 )
        {
          v15 = 0;
          if ( v14 )
          {
            v16 = *(_QWORD *)(v14 + 64);
            while ( v16 >= 0 )
            {
              if ( (_DWORD)v16 != 0x7FFFFFFF )
              {
                v17 = v16;
                v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 64), v16 + 1, v16);
                if ( v17 != v16 )
                  continue;
              }
              goto LABEL_27;
            }
            Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v16 + 16));
          }
LABEL_27:
          v5 = *(_QWORD *)v13;
          v27 = *(_QWORD *)v13;
        }
        else
        {
          v15 = -2147023728;
        }
        ++v12;
        if ( v15 >= 0 )
          goto LABEL_32;
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v5 )
    {
      v21 = *(_QWORD *)(v5 + 64);
      while ( v21 >= 0 )
      {
        if ( (_DWORD)v21 == 0x7FFFFFFF )
          return 0LL;
        v22 = v21 - 1;
        v23 = v21;
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 64), v21 - 1, v21);
        if ( v23 == v21 )
          goto LABEL_45;
      }
      v22 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v21 + 16), v20);
LABEL_45:
      if ( !v22 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 48LL))(v27, 1LL);
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
  return 0LL;
}
