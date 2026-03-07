struct tagEDGY_DATA *__fastcall Edgy::_InitializeData(Edgy *this, struct tagDESKTOP *a2)
{
  struct tagEDGY_DATA *result; // rax
  __int64 v4; // rax
  __int64 v5; // rbx

  result = (struct tagEDGY_DATA *)*((_QWORD *)this + 30);
  if ( !result )
  {
    v4 = Win32AllocPoolZInit(296LL, 1684370261LL);
    v5 = v4;
    if ( v4 )
    {
      memmove((void *)(v4 + 20), &unk_1C0322550, 0x9CuLL);
      *(_DWORD *)(v5 + 252) = 350;
      *(_DWORD *)(v5 + 264) = 4000;
      *(_DWORD *)(v5 + 268) = 4000;
      *(_DWORD *)(v5 + 272) = 450;
      *(_QWORD *)(v5 + 280) = 450LL * gliQpcFreq / 1000;
      *((_QWORD *)this + 30) = v5;
    }
    return (struct tagEDGY_DATA *)v5;
  }
  return result;
}
