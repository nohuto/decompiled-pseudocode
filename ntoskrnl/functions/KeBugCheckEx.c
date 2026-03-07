// local variable allocation has failed, the output may be wrong!
void __stdcall __noreturn KeBugCheckEx(
        ULONG BugCheckCode,
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  _CONTEXT *Context; // r10
  char **v6; // r8
  void *v7; // r9
  signed __int8 CurrentIrql; // al
  __int64 v9; // [rsp+30h] [rbp-8h]
  char *retaddr; // [rsp+38h] [rbp+0h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+8h]
  int v12; // [rsp+48h] [rbp+10h]
  int v13; // [rsp+50h] [rbp+18h]
  int v14; // [rsp+58h] [rbp+20h]
  char v15; // [rsp+68h] [rbp+30h] BYREF

  v11 = *(_QWORD *)&BugCheckCode;
  v12 = BugCheckParameter1;
  v13 = BugCheckParameter2;
  v14 = BugCheckParameter3;
  _disable();
  RtlCaptureContext(KeGetCurrentPrcb()->Context);
  KiSaveProcessorControlState(&KeGetCurrentPrcb()->ProcessorState);
  Context = KeGetCurrentPrcb()->Context;
  Context->Rcx = v11;
  *(_QWORD *)&Context->EFlags = v9;
  if ( &byte_140415FE9 == retaddr )
  {
    v6 = (char **)&v15;
    v7 = KeBugCheck;
  }
  else
  {
    v6 = &retaddr;
    v7 = KeBugCheckEx;
  }
  Context->Rsp = (unsigned __int64)v6;
  Context->Rip = (unsigned __int64)v7;
  CurrentIrql = KeGetCurrentIrql();
  __writegsbyte(0x82D8u, CurrentIrql);
  if ( CurrentIrql < 2 )
    __writecr8(2uLL);
  if ( (v9 & 0x200) != 0 )
    _enable();
  _InterlockedIncrement(&KiHardwareTrigger);
  if ( &byte_140415FE9 != retaddr )
    KeBugCheck2(v11, v12, v13, v14, BugCheckParameter4, 0LL);
  KeBugCheck2(v11, 0, 0, 0, 0LL, 0LL);
}
