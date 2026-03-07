__int64 __fastcall MNAllocMenuItems(__int64 a1, unsigned __int8 a2)
{
  int v3; // r14d
  unsigned int v4; // esi
  char *v5; // rbp
  char *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  signed int v10; // ecx
  __int64 v11; // rbx

  v3 = 16 * (a2 ^ 1) - 8;
  v4 = 0;
  v5 = (char *)Win32AllocPoolZInit(96LL * (unsigned int)(v3 + *(_DWORD *)(**(_QWORD **)a1 + 60LL)), 1953066325LL);
  if ( !v5 )
    return 0LL;
  v6 = (char *)DesktopAlloc(
                 *(_QWORD *)(**(_QWORD **)a1 + 24LL),
                 (unsigned int)(112 * (v3 + *(_DWORD *)(**(_QWORD **)a1 + 60LL))),
                 7LL);
  if ( !v6 )
  {
    Win32FreePool(v5);
    return 0LL;
  }
  if ( *(_QWORD *)(**(_QWORD **)a1 + 88LL) )
  {
    v10 = *(_DWORD *)(**(_QWORD **)a1 + 60LL);
    if ( v3 + v10 < (unsigned int)v10 )
      v10 += v3;
    v11 = v10;
    memmove(v5, *(const void **)(**(_QWORD **)a1 + 88LL), 96LL * v10);
    memmove(v6, *(const void **)(**(_QWORD **)a1 + 96LL), 112 * v11);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(**(_QWORD **)a1 + 24LL) + 128LL), 0, *(PVOID *)(**(_QWORD **)a1 + 96LL));
    Win32FreePool(*(void **)(**(_QWORD **)a1 + 88LL));
  }
  if ( v3 + *(_DWORD *)(**(_QWORD **)a1 + 60LL) )
  {
    do
    {
      v7 = v4++;
      v8 = 96 * v7;
      *(_QWORD *)&v5[v8] = &v6[112 * v7];
      *(_QWORD *)&v5[v8 + 8] = *(_QWORD *)&v5[v8] - *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 24LL) + 16LL);
    }
    while ( v4 < v3 + *(_DWORD *)(**(_QWORD **)a1 + 60LL) );
  }
  *(_DWORD *)(**(_QWORD **)a1 + 60LL) += v3;
  tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(**(_QWORD **)a1 + 88LL, v5);
  result = 1LL;
  *(_QWORD *)(**(_QWORD **)a1 + 96LL) = **(_QWORD **)(**(_QWORD **)a1 + 88LL);
  return result;
}
