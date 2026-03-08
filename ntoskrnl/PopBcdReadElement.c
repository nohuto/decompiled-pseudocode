/*
 * XREFs of PopBcdReadElement @ 0x14082C610
 * Callers:
 *     PopBcdSetDefaultResumeObjectElements @ 0x14082BFD0 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdRegenerateResumeObject @ 0x140999C24 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopBcdReadElement(int a1, int a2, _QWORD *a3, _DWORD *a4)
{
  void *Pool2; // rdi
  int v9; // r8d
  int ElementDataWithFlags; // ebx
  _DWORD v12[6]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 0;
  if ( (unsigned int)BcdGetElementDataWithFlags(a1, a2, (_DWORD)a3, 0, (__int64)v12) == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, v12[0], 1684226640LL);
    if ( Pool2 )
    {
      ElementDataWithFlags = BcdGetElementDataWithFlags(a1, a2, v9, (_DWORD)Pool2, (__int64)v12);
      if ( ElementDataWithFlags < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        ElementDataWithFlags = 0;
        *a4 = v12[0];
        *a3 = Pool2;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)ElementDataWithFlags;
}
