__int64 __fastcall ProcessSectionAttributes(PVOID Object, struct _DXGK_ALLOCATIONINFO *a2)
{
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v5; // ebx
  int v6; // r8d
  UINT v7; // edx
  UINT Alignment; // eax
  __int128 SectionInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]
  HANDLE SectionHandle; // [rsp+80h] [rbp+18h] BYREF

  SectionHandle = 0LL;
  ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(Object);
  v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x20000u, ObjectType, 0, &SectionHandle);
  if ( v5 >= 0 )
  {
    SectionInformation = 0LL;
    v11 = 0LL;
    v5 = ZwQuerySection(SectionHandle, SectionBasicInformation, &SectionInformation, 0x18uLL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = DWORD2(SectionInformation);
      v7 = a2->Flags.Value | 4;
      if ( (DWORD2(SectionInformation) & 0x50000000) != 0 )
        v7 = a2->Flags.Value & 0xFFFFFFFB;
      a2->Flags.Value = v7;
      if ( (v6 & 0x8000000) != 0 )
      {
        if ( (v6 & 0x80000) != 0 )
        {
          Alignment = a2->Alignment;
          if ( !Alignment || (_WORD)Alignment )
            a2->Alignment = 0x10000;
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, 3986LL);
        v5 = -1073741811;
      }
    }
    ObCloseHandle(SectionHandle, 0);
  }
  return (unsigned int)v5;
}
