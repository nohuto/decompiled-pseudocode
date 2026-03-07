__int64 __fastcall ExpandAV_CY(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int16 *v4; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 312);
  if ( (*(_DWORD *)(v1 + 232))-- == 1 )
  {
    v4 = *(unsigned __int16 **)(v1 + 216);
    *(_DWORD *)(v1 + 232) = *v4;
    *(_QWORD *)(v1 + 216) = v4 + 1;
    (*(void (**)(void))(a1 + 232))();
    result = *(int *)(a1 + 260);
    *(_QWORD *)(a1 + 248) += result;
  }
  return result;
}
