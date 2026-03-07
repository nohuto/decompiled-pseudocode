__int64 __fastcall CPointerInfoNode::IsAnyMessageDelegated(CPointerInfoNode *this)
{
  __int64 result; // rax
  unsigned int *v2; // rcx
  CPointerInfoNode *v3; // rcx
  CPointerInfoNode *v4; // rcx
  int v5; // ecx
  __int64 v6; // r11
  CPointerInfoNode *v7; // rcx
  int v8; // r11d
  unsigned int v9; // r10d

  result = CPointerInfoNode::IsValid(this);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)CPointerInfoNode::IsMessageDelegated(
                         (CPointerInfoNode *)*v2,
                         1,
                         -__CFSHR__(*v2, 21),
                         -__CFSHR__(*v2, 22),
                         -__CFSHR__(*v2, 23))
      || (unsigned int)CPointerInfoNode::IsMessageDelegated(
                         v3,
                         -__CFSHR__((_DWORD)v3, 24),
                         -__CFSHR__((_DWORD)v3, 25),
                         -__CFSHR__((_DWORD)v3, 26),
                         -__CFSHR__((_DWORD)v3, 27))
      || (unsigned int)CPointerInfoNode::IsMessageDelegated(
                         v4,
                         -__CFSHR__((_DWORD)v4, 28),
                         (8 * (int)v4) >> 31,
                         (4 * (int)v4) >> 31,
                         (2 * (int)v4) >> 31)
      || (unsigned int)CPointerInfoNode::IsMessageDelegated(
                         (CPointerInfoNode *)(unsigned int)(v5 >> 31),
                         v5 >> 31,
                         -(*(_DWORD *)(v6 + 4) & 1),
                         -__CFSHR__(*(_DWORD *)(v6 + 4), 2),
                         -__CFSHR__(*(_DWORD *)(v6 + 4), 3))
      || (unsigned int)CPointerInfoNode::IsMessageDelegated(
                         v7,
                         -__CFSHR__(v8, 4),
                         -__CFSHR__(v8, 5),
                         -__CFSHR__(v8, 6),
                         -__CFSHR__(v8, 7)) )
    {
      return 1;
    }
    return v9;
  }
  return result;
}
