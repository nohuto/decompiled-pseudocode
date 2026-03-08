/*
 * XREFs of CmpQueryNameString @ 0x140733F8C
 * Callers:
 *     CmpTraceHiveMountBaseFileMounted @ 0x1407311D4 (CmpTraceHiveMountBaseFileMounted.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 *     CmpStartRMLog @ 0x140863C7C (CmpStartRMLog.c)
 *     CmpTraceHiveRestoreStart @ 0x140A0FFC0 (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x140A1BBAC (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  char *v4; // r14
  int v5; // ebx
  __int64 i; // rbp
  __int64 Pool2; // rax
  UNICODE_STRING *v8; // rdi
  int v9; // eax
  __int64 Length; // rcx
  __int64 StringRoutine; // rax
  NTSTATUS appended; // eax
  unsigned __int16 v13; // dx
  wchar_t *Buffer; // r8
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  v4 = (char *)Object;
  v5 = result;
  if ( result >= 0 )
  {
    for ( i = 272LL; ; i = v15 )
    {
      Pool2 = ExAllocatePool2(256LL, i, 1649626435LL);
      v8 = (UNICODE_STRING *)Pool2;
      if ( !Pool2 )
        break;
      v9 = ObQueryNameStringMode(v4, Pool2, i, &v15, 0);
      v5 = v9;
      if ( v9 >= 0 )
      {
        a2->Length = 0;
        Length = v8->Length;
        a2->MaximumLength = v8->Length;
        StringRoutine = ExpAllocateStringRoutine(Length);
        a2->Buffer = (wchar_t *)StringRoutine;
        if ( StringRoutine )
        {
          appended = RtlAppendUnicodeStringToString(a2, v8);
          v13 = a2->Length;
          v5 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)v13 >> 1) - 1] )
                break;
              v13 -= 2;
              a2->Length = v13;
            }
            while ( v13 );
          }
        }
        else
        {
          v5 = -1073741801;
        }
LABEL_9:
        if ( v8 )
          ExFreePoolWithTag(v8, 0);
        break;
      }
      if ( v9 != -2147483643 || v15 <= (unsigned int)i )
        goto LABEL_9;
      ExFreePoolWithTag(v8, 0);
    }
    ObfDereferenceObject(v4);
    return v5;
  }
  return result;
}
