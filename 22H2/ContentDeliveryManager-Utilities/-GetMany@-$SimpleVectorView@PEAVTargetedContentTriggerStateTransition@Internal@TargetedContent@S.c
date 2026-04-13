/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@V?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@PEAI@Z @ 0x180060270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // rdx
  int v7; // ebx
  _DWORD *v8; // rsi
  int v9; // eax
  _DWORD *v10; // rax
  __int64 i; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v16; // [rsp+68h] [rbp+38h]

  v16 = a4;
  v5 = 0LL;
  if ( a3 )
  {
    while ( 1 )
    {
      *(_QWORD *)(a4 + 8 * v5) = 0LL;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= a3 )
        break;
      a4 = v16;
    }
  }
  *a5 = 0;
  v7 = *(_DWORD *)(a1 + 80);
  v8 = *(_DWORD **)(a1 + 72);
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(*(_QWORD *)v8 + 128LL))(
           *(_QWORD *)(a1 + 72),
           a2,
           a3,
           v16,
           a5);
    v7 = v9;
    if ( *(_DWORD *)(a1 + 84) != v8[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v10 = a5;
        for ( i = 0LL; (unsigned int)i < *a5; v10 = a5 )
        {
          v12 = v16;
          v13 = *(_QWORD *)(v16 + 8 * i);
          if ( v13 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            *(_QWORD *)(v16 + 8 * i) = 0LL;
            v12 = v16;
          }
          *(_QWORD *)(v12 + 8 * i) = 0LL;
          i = (unsigned int)(i + 1);
        }
        *v10 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v7, 0LL);
  }
  return (unsigned int)v7;
}
