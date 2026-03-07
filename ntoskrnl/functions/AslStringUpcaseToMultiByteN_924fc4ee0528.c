__int64 __fastcall AslStringUpcaseToMultiByteN(__int64 a1, __int64 a2, const WCHAR *a3)
{
  unsigned __int16 MaximumLength; // bx
  __int64 v5; // rcx
  wchar_t *Buffer; // rdi
  NTSTATUS v7; // ebx
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  wchar_t v11; // cx
  __int16 v12; // cx
  UNICODE_STRING v14; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v14.Length = 0LL;
  RtlInitUnicodeString(&DestinationString, a3);
  MaximumLength = DestinationString.MaximumLength;
  v14.Buffer = (wchar_t *)AslAlloc(v5, DestinationString.MaximumLength);
  Buffer = v14.Buffer;
  if ( v14.Buffer )
  {
    v14.MaximumLength = MaximumLength;
    v14.Length = 0;
    v7 = RtlUpcaseUnicodeString(&v14, &DestinationString, 0);
    if ( v7 >= 0 )
    {
      v8 = 0LL;
      v9 = (unsigned __int64)v14.Length >> 1;
      v10 = 0LL;
      Buffer = v14.Buffer;
      if ( v9 )
      {
        while ( 1 )
        {
          v11 = Buffer[v10];
          *(_BYTE *)(v8 + a1) = v11;
          if ( (unsigned __int64)++v8 >= 0x104 )
            break;
          v12 = HIBYTE(v11);
          if ( (_BYTE)v12 )
          {
            *(_BYTE *)(v8 + a1) = v12;
            if ( (unsigned __int64)++v8 >= 0x104 )
              break;
          }
          if ( ++v10 >= v9 )
            goto LABEL_10;
        }
        v7 = -1073741789;
        AslLogCallPrintf(1LL);
      }
      else
      {
LABEL_10:
        *(_BYTE *)(v8 + a1) = 0;
        v7 = 0;
      }
    }
    else
    {
      AslLogCallPrintf(1LL);
      Buffer = v14.Buffer;
    }
  }
  else
  {
    v7 = -1073741801;
    AslLogCallPrintf(1LL);
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)v7;
}
