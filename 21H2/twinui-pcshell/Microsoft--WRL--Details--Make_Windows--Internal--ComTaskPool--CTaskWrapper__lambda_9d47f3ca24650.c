/*
 * XREFs of Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8_____lambda_9d47f3ca24650e09de4b87214d29e4d8___ @ 0x180052000
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9d47f3ca24650e09de4b87214d29e4d8___ @ 0x180051F80 (Windows--Internal--ComTaskPool--QueueTask__lambda_9d47f3ca24650e09de4b87214d29e4d8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800522B8 (--0-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Pa_ea_1800522B8.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8_____lambda_9d47f3ca24650e09de4b87214d29e4d8___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx

  *a1 = 0LL;
  v4 = operator new(0x170uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v5[2] = *(_QWORD *)a2;
    v7 = (_QWORD *)(a2 + 24);
    v5[3] = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    *((_DWORD *)v5 + 8) = *(_DWORD *)(a2 + 16);
    v5[5] = 0LL;
    if ( v5 + 5 != (_QWORD *)(a2 + 24) )
    {
      v5[5] = *v7;
      *v7 = 0LL;
    }
    v5[6] = 0LL;
    v8 = (_QWORD *)(a2 + 32);
    if ( v5 + 6 != (_QWORD *)(a2 + 32) )
    {
      v5[6] = *v8;
      *v8 = 0LL;
    }
    LOBYTE(v6) = *(_DWORD *)(a2 + 72) != 0;
    wil::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      v5 + 7,
      a2 + 40,
      v6);
    v5[7] = &SingleViewExperienceTelemetry::Reactivate::`vftable';
    *v5 = off_1804FC1B0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
    *a1 = v5;
  }
  return a1;
}
