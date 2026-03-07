__int64 __fastcall CCD_TOPOLOGY::RemoveCloneGroupByModality(CCD_TOPOLOGY *this, const struct _LUID *a2, int a3)
{
  __int64 v3; // rax
  int v4; // ebp
  unsigned int v5; // ebx
  __int64 v9; // r9
  unsigned int v10; // r10d
  __int64 v11; // rdi
  int v12; // r10d
  unsigned int v13; // r11d
  unsigned int v14; // edi
  __int64 v15; // rdx

  v3 = *((_QWORD *)this + 8);
  v4 = -1;
  v5 = 0;
  if ( v3 && *(_WORD *)(v3 + 20) )
  {
    CCD_TOPOLOGY::ClearModalitySetId((void **)this);
    v9 = *((_QWORD *)this + 8);
    v10 = 0;
    if ( *(_WORD *)(v9 + 20) )
    {
      while ( 1 )
      {
        v11 = 296LL * v10;
        if ( CCD_TOPOLOGY::IsMatchingSource((const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v11 + v9 + 56), a2, a3) )
          break;
        v10 = v12 + 1;
        if ( v10 >= v13 )
          goto LABEL_8;
      }
      v4 = *(_DWORD *)(v11 + v9 + 240);
LABEL_8:
      v14 = 0;
      do
      {
        v15 = v9;
        if ( v4 != *(_DWORD *)(296LL * v5 + v9 + 240) )
        {
          if ( v14 != v5 )
          {
            CCD_TOPOLOGY::SwapPathsDescriptors(this, v5, v14);
            v15 = *((_QWORD *)this + 8);
          }
          ++v14;
        }
        ++v5;
        v9 = v15;
      }
      while ( v5 < *(unsigned __int16 *)(v15 + 20) );
    }
    else
    {
      LOWORD(v14) = 0;
      v15 = *((_QWORD *)this + 8);
    }
    *(_WORD *)(v15 + 20) = v14;
  }
  return 0LL;
}
