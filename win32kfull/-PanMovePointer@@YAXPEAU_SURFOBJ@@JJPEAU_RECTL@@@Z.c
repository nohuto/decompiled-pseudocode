void __fastcall PanMovePointer(struct _SURFOBJ *a1, LONG a2, unsigned int a3, struct _RECTL *a4)
{
  DHPDEV dhpdev; // rbx
  void (__fastcall *v9)(_QWORD, _QWORD, _QWORD, struct _RECTL *); // rax
  int v10; // edi
  struct _RECTL *v11; // rdx
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  HSEMAPHORE v15; // [rsp+50h] [rbp+8h] BYREF

  dhpdev = a1->dhpdev;
  v15 = (HSEMAPHORE)*((_QWORD *)dhpdev + 14);
  EngAcquireSemaphore(v15);
  v9 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _RECTL *))*((_QWORD *)dhpdev + 129);
  if ( v9 && ((_DWORD)dhpdev[11] & 0x10000) != 0 )
    v9(*((_QWORD *)dhpdev + 9), (unsigned int)a2, a3, a4);
  v10 = a1->sizlBitmap.cy + a3;
  v11 = (struct _RECTL *)(dhpdev + 4);
  v12 = 0;
  if ( a2 < *((_DWORD *)dhpdev + 4) )
  {
    v12 = 1;
    v13 = a2 + *(_DWORD *)dhpdev;
    v11->left = a2;
    *((_DWORD *)dhpdev + 6) = v13;
  }
  if ( a2 > *((_DWORD *)dhpdev + 6) )
  {
    *((_DWORD *)dhpdev + 6) = a2;
    v12 = 1;
    v11->left = a2 - *(_DWORD *)dhpdev;
  }
  if ( v10 < *((_DWORD *)dhpdev + 5) )
  {
    v14 = *((_DWORD *)dhpdev + 1);
    v12 = 1;
    *((_DWORD *)dhpdev + 5) = v10;
    *((_DWORD *)dhpdev + 7) = v10 + v14;
  }
  if ( v10 > *((_DWORD *)dhpdev + 7) )
  {
    *((_DWORD *)dhpdev + 7) = v10;
    *((_DWORD *)dhpdev + 5) = v10 - *((_DWORD *)dhpdev + 1);
LABEL_13:
    vPanningUpdate((struct _PANDEV *)dhpdev, v11, 0LL);
    goto LABEL_14;
  }
  if ( v12 )
    goto LABEL_13;
LABEL_14:
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v15);
  PanSynchronize(dhpdev, 0LL);
  PANDEVLOCK::vUnLock((PANDEVLOCK *)&v15);
}
