__int64 __fastcall lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_(__int64 *a1, __int64 a2)
{
  __int64 v4; // r14
  unsigned int DrawListWorker; // edi
  __int64 v7; // rax
  char v8; // di
  __int64 v9; // rcx
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // ecx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  char v14; // [rsp+40h] [rbp-18h]

  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a1 + 8))(a1, 3LL) )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 80LL);
    if ( v4 )
    {
      if ( *(_DWORD *)(a2 + 128) < *(_DWORD *)(a2 + 180) )
      {
        v7 = *a1;
        v8 = 0;
        v13 = 0LL;
        v14 = 0;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v7 + 8))(a1, 2LL) )
        {
          CDrawListBitmap::operator=(&v13, a1 + 7);
          v8 = v14;
        }
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 16LL))(v4, *(unsigned int *)(a2 + 128));
        if ( (_QWORD)v13 )
          v10 = (_QWORD)v13 == *(_QWORD *)v9;
        else
          v10 = *((_QWORD *)&v13 + 1) == *(_QWORD *)(v9 + 8);
        if ( !v10 || v8 != *(_BYTE *)(v9 + 16) )
        {
          v11 = CDrawListEntryBuilder::End(*(CDrawListEntryBuilder **)(a2 + 184));
          DrawListWorker = v11;
          if ( v11 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x18Cu, 0LL);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13 + 8);
            wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
            return DrawListWorker;
          }
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13 + 8);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
      }
    }
  }
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 128) + 136) = a1;
  DrawListWorker = CBrushDrawListGenerator::GenerateDrawListWorker((struct CBrushDrawListGenerator::GenerateDrawListParameters *)a2);
  *(_QWORD *)(a2 + 8LL * *(unsigned int *)(a2 + 128) + 136) = 0LL;
  return DrawListWorker;
}
