// positive sp value has been detected, the output may be wrong!
void __fastcall KiKernelIstExit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v14; // [rsp+20h] [rbp+10h]
  unsigned __int64 v15; // [rsp+28h] [rbp+18h]

  v8 = v15;
  if ( (v15 & 1) != 0 )
  {
    if ( !_interlockedbittestandreset(MK_FP(__GS__, 40984LL), 0) )
    {
      v12 = __readcr3();
      if ( v12 == v15 )
        goto LABEL_8;
      v8 = v15 | 0x8000000000000000uLL;
    }
  }
  else
  {
    v9 = __readcr3();
    if ( v9 == v15 )
      goto LABEL_8;
  }
  __writecr3(v8);
LABEL_8:
  __writemsr(0xC0000101, v14);
  __asm
  {
    verw    [rsp+arg_18]
    iretq
  }
}
