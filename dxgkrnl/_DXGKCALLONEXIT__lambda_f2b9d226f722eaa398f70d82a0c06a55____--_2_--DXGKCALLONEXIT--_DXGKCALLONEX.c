__int64 __fastcall DXGKCALLONEXIT__lambda_f2b9d226f722eaa398f70d82a0c06a55____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
    return BLTQUEUE_REMOTE_VSYNC_SOURCE::LogStartStatus(
             *(_QWORD *)(a1 + 8),
             **(unsigned int **)(a1 + 8),
             **(unsigned int **)(a1 + 16));
  return result;
}
