/*
 * XREFs of ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x1803124A8
 * Callers:
 *     _lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_::operator() @ 0x180310A20 (_lambda_0d8ec9669f9c0b6c29dfc0db22a1d2dd_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@IPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@$$QEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x18030D778 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@IPEAUIUnknown@@PEBGPEBGW4ViewLif.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3AEAPEAVViewEventDispatcher@@@Z @ 0x18030DB7C (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVVi.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x180313C08 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x180313CDC (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 CreateWrapperForRecoveredView(struct MsgString *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int16 *v6; // rsi
  CallerIdentity *Data; // rax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  UAPViewWrapper *v14; // [rsp+40h] [rbp-20h] BYREF
  int v15[2]; // [rsp+48h] [rbp-18h] BYREF
  struct IUnknown *v16; // [rsp+50h] [rbp-10h] BYREF
  struct IUnknown *v17; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  struct ViewEventDispatcher *v19; // [rsp+A8h] [rbp+48h] BYREF
  va_list va; // [rsp+A8h] [rbp+48h]
  wchar_t *v21; // [rsp+B0h] [rbp+50h] BYREF
  va_list va1; // [rsp+B0h] [rbp+50h]
  va_list va2; // [rsp+B8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v19 = va_arg(va1, struct ViewEventDispatcher *);
  va_copy(va2, va1);
  v21 = va_arg(va2, wchar_t *);
  v6 = v21;
  *(_QWORD *)v21 = 0LL;
  Data = (CallerIdentity *)MsgStringGetData(a1);
  v8 = IsLegacyApp(Data, (bool *)va1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v14 = 0LL;
    v10 = *(_QWORD *)(a3 + 16);
    if ( (_BYTE)v21 )
    {
      LODWORD(v21) = 0;
      *(_QWORD *)v15 = off_180509D60[v10 & -(__int64)(v10 < 4)];
      v16 = (struct IUnknown *)MsgStringGetData(a1);
      v17 = *(struct IUnknown **)a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int,IUnknown *,unsigned short const *,unsigned short const *,enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
              &v14,
              (unsigned int *)(a2 + 8),
              &v17,
              (__int64 *)&v16,
              v15,
              (wchar_t **)va1,
              (struct ViewEventDispatcher **)va);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = 2605LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v11);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
        goto LABEL_10;
      }
    }
    else
    {
      v21 = off_180509D60[v10 & -(__int64)(v10 < 4)];
      v17 = (struct IUnknown *)MsgStringGetData(a1);
      v16 = *(struct IUnknown **)a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,ViewEventDispatcher * &>(
              &v14,
              (unsigned int *)(a2 + 8),
              &v16,
              (const unsigned __int16 **)&v17,
              (const unsigned __int16 **)va1,
              (struct ViewEventDispatcher **)va);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = 2615LL;
        goto LABEL_6;
      }
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    *(_QWORD *)v6 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v9 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA21,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v8);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a2);
  return v9;
}
