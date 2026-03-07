__int64 __fastcall DirectComposition::CDeletedNotificationList::EnsureTagAllocation(
        DirectComposition::CDeletedNotificationList *this)
{
  int v2; // esi
  unsigned int v3; // ecx
  __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  __int64 v8; // rdx
  size_t v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 Src; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 11);
  v4 = *((_QWORD *)this + 3);
  if ( v3 + *((_DWORD *)this + 12) != v4 )
  {
LABEL_5:
    ++*((_DWORD *)this + 12);
    return (unsigned int)v2;
  }
  v5 = v3;
  v6 = v4 - *((unsigned int *)this + 10);
  v2 = DirectComposition::CDCompDynamicArrayBase::Grow(this, 1LL, 0x626E4344u);
  if ( v2 >= 0 )
  {
    if ( v5 > v6 )
    {
      v8 = *((unsigned int *)this + 10);
      v9 = *((_QWORD *)this + 4);
      v10 = *(_QWORD *)this;
      *((_DWORD *)this + 10) = v8 + 1;
      v11 = v9 * (*((_QWORD *)this + 3) - 1LL);
      Src = *(_QWORD *)(v8 * v9 + v10);
      memmove((void *)(v10 + v11), &Src, v9);
    }
    goto LABEL_5;
  }
  return (unsigned int)v2;
}
