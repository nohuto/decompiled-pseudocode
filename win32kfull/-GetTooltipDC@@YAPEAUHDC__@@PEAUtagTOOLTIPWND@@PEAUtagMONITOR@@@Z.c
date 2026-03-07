HDC __fastcall GetTooltipDC(struct tagTOOLTIPWND *a1, struct tagMONITOR *a2)
{
  HDC result; // rax
  HDC v3; // rsi
  __int64 DPIMETRICSForDpi; // rax

  result = (HDC)_GetDCEx(*(_QWORD *)a1, 0LL, 65539LL);
  v3 = result;
  if ( result )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi();
    GreSelectFontInternal(v3, *(_QWORD *)(DPIMETRICSForDpi + 56), 1LL);
    return v3;
  }
  return result;
}
