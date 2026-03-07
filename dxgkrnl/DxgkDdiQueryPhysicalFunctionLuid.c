void __fastcall DxgkDdiQueryPhysicalFunctionLuid(char *a1, int a2, struct _LUID *a3)
{
  bool v3; // zf
  struct _LUID *v5; // rdx
  LONG HighPart; // [rsp+28h] [rbp-20h]
  DWORD LowPart; // [rsp+30h] [rbp-18h]

  v3 = a2 == 1;
  v5 = (struct _LUID *)(a1 + 404);
  if ( v3 )
    v5 = (struct _LUID *)(a1 + 4564);
  RtlCopyLuid(a3, v5);
  if ( bTracingEnabled )
  {
    LowPart = a3->LowPart;
    HighPart = a3->HighPart;
    VgpuTrace(1, 0, a1, L"DxgkDdiQueryPhysicalFunctionLuid", (wchar_t *)L"%d %d ", HighPart, LowPart);
  }
}
