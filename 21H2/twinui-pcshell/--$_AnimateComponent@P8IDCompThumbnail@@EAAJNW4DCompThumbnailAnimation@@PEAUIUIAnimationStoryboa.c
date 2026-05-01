/*
 * XREFs of ??$_AnimateComponent@P8IDCompThumbnail@@EAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@ZNW42@PEAU3@@CSwitchItemElement@@IEAAJW4SwitchItemComponent@@P8IDCompThumbnail@@EAAJNW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@ZN12@Z @ 0x18040FE4C
 * Callers:
 *     ?SetComponentOpacity@CSwitchItemElement@@UEAAJW4SwitchItemComponent@@NW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180411030 (-SetComponentOpacity@CSwitchItemElement@@UEAAJW4SwitchItemComponent@@NW4DCompThumbnailAnimation@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??_9IBamThrottleSettings@@$BCA@AA @ 0x180161190 (--_9IBamThrottleSettings@@$BCA@AA.c)
 */

__int64 __fastcall CSwitchItemElement::_AnimateComponent<long (IDCompThumbnail::*)(double,enum DCompThumbnailAnimation,IUIAnimationStoryboardEventHandler2 *),double,enum DCompThumbnailAnimation,IUIAnimationStoryboardEventHandler2 *>(
        _QWORD *a1,
        int a2,
        __int64 a3)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = a1[77];
      if ( v4 )
      {
        v5 =  IBamThrottleSettings::`vcall'{32,{flat}}(v4);
        v6 = v5;
        if ( v5 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x17F,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
            (const char *)(unsigned int)v5);
          return v6;
        }
      }
      v8 = a1[75];
      if ( v8 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v13);
        if ( v13 )
        {
          v9 =  IBamThrottleSettings::`vcall'{32,{flat}}(v13);
          if ( v9 < 0 )
          {
            v10 = 391LL;
LABEL_15:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v10,
              (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
              (const char *)(unsigned int)v9);
            goto LABEL_16;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      }
    }
    return 0LL;
  }
  v11 = a1[76];
  if ( !v11 )
    return 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, &v13);
  v9 =  IBamThrottleSettings::`vcall'{32,{flat}}(v13);
  if ( v9 < 0 )
  {
    v10 = 377LL;
    goto LABEL_15;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return (unsigned int)v9;
}
