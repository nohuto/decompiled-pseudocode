/*
 * XREFs of PopPlInitWString @ 0x14099D8D0
 * Callers:
 *     PopPlInitDevice @ 0x14099D558 (PopPlInitDevice.c)
 *     PopPlInitPowerPlane @ 0x14099D7DC (PopPlInitPowerPlane.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCchCopyStringN @ 0x14059FC08 (RtlUnicodeStringCchCopyStringN.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPlInitWString(PUNICODE_STRING DestinationString, unsigned int a2, __int64 a3, __int64 a4)
{
  const wchar_t *v5; // rsi
  NTSTATUS v6; // ebx
  size_t v7; // rbx
  size_t v8; // rdx
  wchar_t *Pool2; // rax
  size_t cchToCopy; // [rsp+40h] [rbp+18h] BYREF

  v5 = (const wchar_t *)(a3 + a2);
  *DestinationString = 0LL;
  cchToCopy = 0LL;
  v6 = RtlStringCchLengthW(v5, a4 - (_QWORD)v5, &cchToCopy);
  if ( v6 >= 0 )
  {
    v7 = cchToCopy;
    if ( cchToCopy <= 0x7FFF )
    {
      if ( cchToCopy )
      {
        v8 = 2 * cchToCopy;
        DestinationString->MaximumLength = 2 * cchToCopy;
        Pool2 = (wchar_t *)ExAllocatePool2(64LL, v8, 1817210704LL);
        DestinationString->Buffer = Pool2;
        if ( Pool2 )
        {
          v6 = RtlUnicodeStringCchCopyStringN(DestinationString, v5, v7);
          if ( v6 < 0 )
          {
            ExFreePoolWithTag(DestinationString->Buffer, 0x6C506F50u);
            *DestinationString = 0LL;
          }
        }
        else
        {
          DestinationString->MaximumLength = 0;
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  return (unsigned int)v6;
}
