void __fastcall UpdatePostComposition(unsigned int a1, char a2, int a3, int a4, struct ADAPTER_DISPLAY *a5)
{
  __int64 v7; // r15
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // r9
  char v12; // cl
  __int64 v13; // rax
  _DWORD *v14; // rbx
  __int64 v15; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v7 = a1;
  v9 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct ADAPTER_DISPLAY *)((char *)a5 + 464), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v10 = *((_QWORD *)a5 + 16);
  v11 = 4000 * v7;
  v12 = *(_BYTE *)(v10 + 4000 * v7 + 704);
  if ( a2 )
  {
    if ( !v12 || *(_DWORD *)(v10 + v11 + 708) != a3 || *(_DWORD *)(v10 + v11 + 712) != a4 )
    {
      *(_DWORD *)(v10 + v11 + 708) = a3;
      *(_DWORD *)(v11 + *((_QWORD *)a5 + 16) + 712) = a4;
      *(_BYTE *)(v11 + *((_QWORD *)a5 + 16) + 704) = a2;
LABEL_8:
      v9 = 1;
    }
  }
  else if ( v12 )
  {
    *(_DWORD *)(v10 + v11 + 708) = 0;
    *(_DWORD *)(v11 + *((_QWORD *)a5 + 16) + 712) = 0;
    *(_BYTE *)(v11 + *((_QWORD *)a5 + 16) + 704) = 0;
    goto LABEL_8;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  if ( v9 )
  {
    v13 = operator new[](0x18uLL, 0x4B677844u, 256LL);
    v14 = (_DWORD *)v13;
    if ( v13 )
    {
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 0LL;
      *(_QWORD *)v13 = 0LL;
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v13, *((struct DXGADAPTER **)a5 + 2));
      v14[4] = v7;
      Current = DXGPROCESS::GetCurrent(v15);
      DXGWORKQUEUE::QueueWork(
        (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 104LL),
        (void (*)(void *))lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
        v14);
    }
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
}
