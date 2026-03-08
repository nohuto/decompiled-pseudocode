/*
 * XREFs of PopPlInitPowerPlane @ 0x14099D7DC
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x14059F404 (PopPlRegisterPowerPlane.c)
 * Callees:
 *     PopPlInitDevices @ 0x14099D660 (PopPlInitDevices.c)
 *     PopPlInitWString @ 0x14099D8D0 (PopPlInitWString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPlInitPowerPlane(__int64 a1, __int64 a2, unsigned __int64 a3, UNICODE_STRING **a4)
{
  UNICODE_STRING *v4; // rbx
  int inited; // edi
  UNICODE_STRING *Pool2; // rax
  wchar_t *Buffer; // rcx
  __int64 result; // rax

  v4 = 0LL;
  if ( a1 + 52 <= a3 )
  {
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(64LL, 64LL, 1817210704LL);
    v4 = Pool2;
    if ( Pool2 )
    {
      inited = PopPlInitWString(Pool2);
      if ( inited >= 0 )
      {
        *(_QWORD *)&v4[1].Length = 0LL;
        inited = PopPlInitDevices(
                   (__int64)v4,
                   a1 + 8,
                   *(unsigned int *)(a1 + 4),
                   a2,
                   a3,
                   (unsigned __int64 *)&v4[3].Length,
                   &v4[3].Buffer);
        if ( inited >= 0 )
          goto LABEL_11;
        Buffer = v4->Buffer;
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0x6C506F50u);
        *v4 = 0LL;
      }
      ExFreePoolWithTag(v4, 0x6C506F50u);
      v4 = 0LL;
      goto LABEL_11;
    }
    inited = -1073741670;
  }
  else
  {
    inited = -1073741306;
  }
LABEL_11:
  result = (unsigned int)inited;
  *a4 = v4;
  return result;
}
