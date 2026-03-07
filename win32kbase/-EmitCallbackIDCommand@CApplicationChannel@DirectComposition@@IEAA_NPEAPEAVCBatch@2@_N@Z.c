char __fastcall DirectComposition::CApplicationChannel::EmitCallbackIDCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch ***a2,
        char a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 28;
  *(_OWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 20) = 0LL;
  *((_DWORD *)v5 + 1) = 50;
  if ( a3 )
    v6 = *((_QWORD *)this + 333);
  else
    v6 = *((_QWORD *)this + 332);
  *(_QWORD *)(v5 + 12) = v6;
  v5[20] = a3;
  *((_DWORD *)v5 + 6) = *((_DWORD *)this + 674);
  return 1;
}
