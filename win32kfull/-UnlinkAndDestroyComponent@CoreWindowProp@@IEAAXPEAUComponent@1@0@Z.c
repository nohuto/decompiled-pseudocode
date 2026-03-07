void __fastcall CoreWindowProp::UnlinkAndDestroyComponent(
        CoreWindowProp *this,
        struct CoreWindowProp::Component *a2,
        struct CoreWindowProp::Component *a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *(_QWORD *)a2;
    if ( a3 )
      *(_QWORD *)a3 = v3;
    else
      *((_QWORD *)this + 5) = v3;
    v6 = *((_QWORD *)a2 + 1);
    v7 = 0LL;
    if ( CWindowProp::GetProp<CoreWindowProp>(v6, &v7) )
      *(_QWORD *)(v7 + 32) = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    --*((_DWORD *)this + 12);
    Win32FreePool(a2);
  }
}
