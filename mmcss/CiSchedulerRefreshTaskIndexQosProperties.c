__int64 __fastcall CiSchedulerRefreshTaskIndexQosProperties(__int64 a1)
{
  __int64 result; // rax
  int v3; // r14d
  int v4; // ebp
  unsigned int v5; // ebx
  char v6; // si

  result = *(unsigned int *)(a1 + 184);
  v3 = *(_DWORD *)(a1 + 188);
  v4 = *(_DWORD *)(a1 + 184) & 4;
  if ( (result & 1) == 0 )
    goto LABEL_7;
  if ( (result & 0x20) != 0 )
  {
    v5 = 2;
LABEL_8:
    v6 = 0;
    goto LABEL_9;
  }
  if ( (result & 0x10) != 0 || (result & 2) == 0 )
  {
LABEL_7:
    v5 = 3;
    goto LABEL_8;
  }
  v5 = 1;
  v6 = 1;
LABEL_9:
  if ( !v4 && v6 )
  {
    ++CiTotalTasksBuffering;
    *(_DWORD *)(a1 + 184) = result | 4;
    result = CiSystemUpdateMediaBufferingState(a1);
  }
  if ( v5 != v3 )
    result = CiSchedulerSetTaskIndexThreadTag(a1, v5);
  if ( v4 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 184) &= ~4u;
      --CiTotalTasksBuffering;
      return CiSystemUpdateMediaBufferingState(a1);
    }
  }
  return result;
}
