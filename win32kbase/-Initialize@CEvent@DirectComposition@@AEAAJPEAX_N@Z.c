NTSTATUS __fastcall DirectComposition::CEvent::Initialize(DirectComposition::CEvent *this, void *a2, char a3)
{
  NTSTATUS result; // eax
  PVOID v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  result = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, a3 ^ 1, &v5, 0LL);
  *((_QWORD *)this + 1) = v5;
  return result;
}
