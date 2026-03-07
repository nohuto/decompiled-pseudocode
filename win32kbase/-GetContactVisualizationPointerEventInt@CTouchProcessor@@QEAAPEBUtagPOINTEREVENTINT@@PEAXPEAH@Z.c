const struct tagPOINTEREVENTINT *__fastcall CTouchProcessor::GetContactVisualizationPointerEventInt(
        CTouchProcessor *this,
        CPointerInfoNode *a2,
        int *a3)
{
  _DWORD *v3; // rcx
  _DWORD *v4; // r8

  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) || (*v3 & 0x1000) != 0 )
    return 0LL;
  *v4 = -__CFSHR__(*v3, 4);
  return (const struct tagPOINTEREVENTINT *)(v3 + 40);
}
