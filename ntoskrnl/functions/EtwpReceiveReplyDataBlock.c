__int64 __fastcall EtwpReceiveReplyDataBlock(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  void *v5; // rcx
  LARGE_INTEGER v7; // rax
  NTSTATUS v8; // ebx
  PVOID v9; // rbp
  PLIST_ENTRY v10; // rax
  PLIST_ENTRY v11; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int Flink_high; // eax
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (void *)*a1;
  v7.QuadPart = EtwpOneMs * a1[1];
  Object = 0LL;
  Timeout = v7;
  v8 = ObReferenceObjectByHandle(v5, 4u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = Object;
    if ( (*((_BYTE *)Object + 98) & 4) != 0 )
    {
      v10 = KeRemoveQueue(*((PRKQUEUE *)Object + 6), 1, &Timeout);
      v11 = v10;
      if ( v10 == (PLIST_ENTRY)258 || v10 == (PLIST_ENTRY)192 )
      {
        v8 = (int)v10;
      }
      else
      {
        Flink = v10[1].Flink;
        Flink_high = HIDWORD(Flink->Flink);
        if ( Flink_high > a2 )
        {
          v8 = -1073741789;
        }
        else
        {
          memmove(a1, Flink, Flink_high);
          v8 = 0;
        }
        *a3 = HIDWORD(Flink->Flink);
        EtwpUnreferenceDataBlock((volatile signed __int32 *)Flink);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      v8 = -1073741816;
    }
    ObfDereferenceObject(v9);
  }
  return (unsigned int)v8;
}
