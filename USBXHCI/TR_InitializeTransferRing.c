__int64 __fastcall TR_InitializeTransferRing(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 176);
  if ( *(_BYTE *)(a1 + 280) )
    TR_InitializeTransferSegment(a1, *v1);
  memset(*(void **)(*v1 + 16LL), 0, *(unsigned int *)(*v1 + 44LL));
  v3 = *v1;
  v4 = *(_QWORD *)(*v1 + 16LL);
  *(_DWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 184) = v4;
  result = (unsigned int)((*(_DWORD *)(v3 + 44) >> 4) - 1);
  *(_DWORD *)(a1 + 200) = 1;
  *(_DWORD *)(a1 + 196) = result;
  return result;
}
