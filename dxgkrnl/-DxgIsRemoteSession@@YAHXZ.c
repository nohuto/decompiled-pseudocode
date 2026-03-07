DXGPROCESS *__fastcall DxgIsRemoteSession(__int64 a1)
{
  DXGPROCESS *result; // rax

  result = DXGPROCESS::GetCurrent(a1);
  if ( result )
    return (DXGPROCESS *)DXGPROCESS::IsRemoteConnection(result);
  return result;
}
