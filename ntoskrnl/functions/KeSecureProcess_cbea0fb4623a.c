__int64 __fastcall KeSecureProcess(
        _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _MDL *a6,
        unsigned __int64 a7)
{
  unsigned int v11; // ebx
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+40h] [rbp-68h] BYREF

  memset(&v13, 0, sizeof(v13));
  KiStackAttachProcess(a1, 0, (__int64)&v13);
  v11 = VslInitializeSecureProcess(a1->SecureState.SecureHandle, a2, a3, a4, a5, a6, a7);
  KiUnstackDetachProcess(&v13);
  return v11;
}
