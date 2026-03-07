__int64 __fastcall CBufferRealization::Initialize(PVOID *this, char a2)
{
  struct DXGGLOBAL *Global; // rax
  NTSTATUS v5; // edi
  struct _OBJECT_TYPE *SharedAllocationObjectType; // rax
  PVOID v7; // rcx
  PVOID v8; // rax
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Global + 38069) + 32LL))((char *)this + 72);
  if ( v5 >= 0 )
  {
    if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      if ( a2 )
      {
        ObfReferenceObject(this[4]);
        v8 = this[4];
      }
      else
      {
        SharedAllocationObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedAllocationObjectType();
        v7 = this[4];
        Object = 0LL;
        v5 = ObReferenceObjectByHandle(v7, 0xF0000u, SharedAllocationObjectType, 1, &Object, 0LL);
        v8 = Object;
      }
      this[4] = 0LL;
      this[8] = v8;
    }
  }
  return (unsigned int)v5;
}
